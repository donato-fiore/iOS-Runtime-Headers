// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TCMESSAGEPLACEHOLDERINFO_H
#define TCMESSAGEPLACEHOLDERINFO_H


#import <Foundation/Foundation.h>


@interface TCMessagePlaceholderInfo : NSObject {
    id *mKey;
    BOOL mInUse;
}




-(BOOL)isInUse;
-(id)init;
-(id)key;
-(void)setInUse:(BOOL)arg0 ;


@end


#endif