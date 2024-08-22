// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef LPTHEMEPARAMETERSOBSERVER_H
#define LPTHEMEPARAMETERSOBSERVER_H

@class NSHashTable;

#import <Foundation/Foundation.h>


@interface LPThemeParametersObserver : NSObject {
    NSHashTable *_clients;
}




+(id)shared;
-(id)init;
-(void)addClient:(id)arg0 ;
-(void)dealloc;
-(void)didChangeDarkenColorsStatus:(id)arg0 ;
-(void)didChangeThemeParameters;


@end


#endif