// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SDSUPREFERENCES_H
#define SDSUPREFERENCES_H


#import <Foundation/Foundation.h>


@interface SDSUPreferences : NSObject



+(id)sharedInstance;
-(void)clearCatalogURL;
-(void)setCatalogURL:(id)arg0 ;


@end


#endif