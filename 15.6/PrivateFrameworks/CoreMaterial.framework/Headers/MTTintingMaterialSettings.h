// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef MTTINTINGMATERIALSETTINGS_H
#define MTTINTINGMATERIALSETTINGS_H

@class NSString, NSDictionary;
@protocol MTTinting;

#import <Foundation/Foundation.h>


@interface MTTintingMaterialSettings : NSObject <MTTinting>



@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) CGFloat tintAlpha; // ivar: _tintAlpha
@property (readonly, nonatomic) *CGColor tintColor; // ivar: _tintColor
@property (readonly, copy, nonatomic) NSDictionary *tintColorDescription; // ivar: _tintColorDescription
@property (readonly, copy, nonatomic) NSString *tintColorName; // ivar: _tintColorName
@property (readonly, nonatomic) NSInteger tintColorUIStyle; // ivar: _tintColorUIStyle


-(id)initWithTintingDescription:(id)arg0 andDescendantDescriptions:(id)arg1 ;
-(void)_processTintingDescription:(id)arg0 defaultingToIdentity:(BOOL)arg1 ;
-(void)dealloc;


@end


#endif