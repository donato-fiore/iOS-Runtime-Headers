// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NEIKEV2CONFIGURATIONMESSAGE_H
#define NEIKEV2CONFIGURATIONMESSAGE_H

@class NSArray;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface NEIKEv2ConfigurationMessage : NSObject <NSCopying>



@property (retain) NSArray *attributes; // ivar: _attributes
@property NSUInteger configurationType; // ivar: _configurationType


+(id)copyConfigurationForRequest:(id)arg0 reply:(id)arg1 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)descriptionWithIndent:(int)arg0 options:(NSUInteger)arg1 ;
-(id)initWithWithAttributes:(id)arg0 ;


@end


#endif