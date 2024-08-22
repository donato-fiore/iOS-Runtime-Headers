// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef IPAADJUSTMENT_H
#define IPAADJUSTMENT_H

@class NSString, NSDictionary;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "IPAAdjustmentVersion.h"

@interface IPAAdjustment : NSObject <NSCopying>



@property (retain, nonatomic) NSString *identifier; // ivar: _identifier
@property (retain, nonatomic) NSDictionary *settings; // ivar: _settings
@property (retain, nonatomic) IPAAdjustmentVersion *version; // ivar: _version


-(BOOL)isEqual:(id)arg0 ;
-(BOOL)isEqualToAdjustment:(id)arg0 ;
-(id)_debugDescriptionSuffix;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)debugDescription;
-(id)description;
-(id)init;


@end


#endif