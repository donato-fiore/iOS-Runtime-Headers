// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef GTUNSUPPORTEDFENUMINFO_H
#define GTUNSUPPORTEDFENUMINFO_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface GTUnsupportedFenumInfo : NSObject <NSSecureCoding>



@property (readonly, nonatomic) NSString *category; // ivar: _category
@property (readonly, nonatomic) NSString *customMessage; // ivar: _customMessage
@property (readonly, nonatomic) NSString *fenum; // ivar: _fenum


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFenum:(id)arg0 category:(id)arg1 customMessage:(id)arg2 ;
-(id)reason;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif