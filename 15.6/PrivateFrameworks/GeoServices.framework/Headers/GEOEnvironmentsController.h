// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef GEOENVIRONMENTSCONTROLLER_H
#define GEOENVIRONMENTSCONTROLLER_H

@class NSArray;
@protocol GEOEnvironmentsControllerDelegate;

#import <Foundation/Foundation.h>


@interface GEOEnvironmentsController : NSObject {
    NSArray *_defaultEnvironmentInfos;
    NSArray *_environmentInfos;
    NSArray *_customEnvironmentInfos;
    BOOL _enableCustomEnvironments;
}


@property (weak, nonatomic) NSObject<GEOEnvironmentsControllerDelegate> *delegate; // ivar: _delegate


-(id)activeEnvironment;
-(id)environmentInfosForSection:(NSInteger)arg0 ;
-(id)initEnablingCustomEnvironments:(BOOL)arg0 ;
-(void)addCustomEnvironment:(id)arg0 ;
-(void)dealloc;
-(void)reloadEnvironments;
-(void)reloadEnvironments:(id)arg0 ;
-(void)removeCustomEnvironment:(id)arg0 ;


@end


#endif