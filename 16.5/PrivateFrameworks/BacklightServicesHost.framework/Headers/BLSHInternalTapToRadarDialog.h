// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef BLSHINTERNALTAPTORADARDIALOG_H
#define BLSHINTERNALTAPTORADARDIALOG_H

@protocol OS_os_log;

#import <Foundation/Foundation.h>

#import "BLSHTapToRadarDescriptor.h"

@interface BLSHInternalTapToRadarDialog : NSObject {
    NSObject<OS_os_log> *_log;
    id *_completion;
}


@property (readonly, nonatomic) BLSHTapToRadarDescriptor *descriptor; // ivar: _descriptor


-(BOOL)_shouldIgnore;
-(id)initWithDescriptor:(id)arg0 log:(id)arg1 ;
-(void)_alertDidDismiss:(NSInteger)arg0 ;
-(void)_cancel;
-(void)_file;
-(void)_gotError;
-(void)_ignore;
-(void)callCompletion:(BOOL)arg0 shouldTryAgain:(BOOL)arg1 ;
-(void)presentWithCompletion:(id)arg0 ;


@end


#endif