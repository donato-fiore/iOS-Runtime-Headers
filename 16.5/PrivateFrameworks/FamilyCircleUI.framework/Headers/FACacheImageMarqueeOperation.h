// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef FACACHEIMAGEMARQUEEOPERATION_H
#define FACACHEIMAGEMARQUEEOPERATION_H


#import <Foundation/Foundation.h>


@interface FACacheImageMarqueeOperation : NSObject {
    ? familyCircle;
    ? lightModeKey;
    ? darkModeKey;
    ? imageExtension;
    ? pictureStore;
    ? userDefaults;
    ? deviceScale;
}




-(id)init;
-(id)initWithFamilyCircle:(id)arg0 ;
-(void)createAndCacheData;
-(void)generateMarqueeWith:(NSUInteger)arg0 ;


@end


#endif