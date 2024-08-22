// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SCNPRECOMPUTEDLIGHTINGENVIRONMENT_H
#define SCNPRECOMPUTEDLIGHTINGENVIRONMENT_H

@class NSData;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SCNPrecomputedLightingEnvironment : NSObject <NSSecureCoding>



@property (retain, nonatomic) NSData *irradianceData; // ivar: _irradianceData
@property (retain, nonatomic) NSData *radianceData; // ivar: _radianceData


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif