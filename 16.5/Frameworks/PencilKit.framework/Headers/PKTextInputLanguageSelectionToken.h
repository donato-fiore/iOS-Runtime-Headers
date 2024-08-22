// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PKTEXTINPUTLANGUAGESELECTIONTOKEN_H
#define PKTEXTINPUTLANGUAGESELECTIONTOKEN_H

@protocol NSCopying, PKTextInputLanguageSelectionTokenStore;

#import <Foundation/Foundation.h>


@interface PKTextInputLanguageSelectionToken : NSObject <NSCopying>

 {
    id<PKTextInputLanguageSelectionTokenStore> *_store;
}




+(id)tokenWithStore:(id)arg0 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(void)dealloc;
-(void)invalidate;


@end


#endif