// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CSLPRFNANOAPPREGISTRYAPPLICATIONSOURCE_H
#define CSLPRFNANOAPPREGISTRYAPPLICATIONSOURCE_H

@class NARApplicationWorkspace;
@protocol CSLPRFNanoAppRegistryApplicationSourceDelegate;

#import <Foundation/Foundation.h>


@interface CSLPRFNanoAppRegistryApplicationSource : NSObject {
    NARApplicationWorkspace *_workspace;
}


@property (weak, nonatomic) NSObject<CSLPRFNanoAppRegistryApplicationSourceDelegate> *delegate; // ivar: _delegate


-(id)init;
-(void)_appsDidChange;
-(void)allApplicationsWithCompletion:(id)arg0 ;
-(void)dealloc;


@end


#endif