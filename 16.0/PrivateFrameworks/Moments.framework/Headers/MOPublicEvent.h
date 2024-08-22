// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef MOPUBLICEVENT_H
#define MOPUBLICEVENT_H

@class NSString, NSArray;
@protocol NSSecureCoding, NSCopying;

#import <Foundation/Foundation.h>


@interface MOPublicEvent : NSObject <NSSecureCoding, NSCopying>



@property (retain, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSArray *performers; // ivar: _performers
@property (retain, nonatomic) NSString *venue; // ivar: _venue


+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithEventDictionary:(id)arg0 ;
-(id)initWithName:(id)arg0 performers:(id)arg1 venue:(id)arg2 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif