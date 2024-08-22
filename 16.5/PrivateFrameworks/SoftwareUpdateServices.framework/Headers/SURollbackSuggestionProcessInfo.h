// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SUROLLBACKSUGGESTIONPROCESSINFO_H
#define SUROLLBACKSUGGESTIONPROCESSINFO_H

@class NSString, NSError;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface SURollbackSuggestionProcessInfo : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *processID; // ivar: _processID
@property (retain, nonatomic) NSString *processName; // ivar: _processName
@property (retain, nonatomic) NSError *rollbackSuggestionError; // ivar: _rollbackSuggestionError


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithProcessID:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif