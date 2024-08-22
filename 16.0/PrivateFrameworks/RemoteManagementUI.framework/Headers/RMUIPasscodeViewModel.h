// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef RMUIPASSCODEVIEWMODEL_H
#define RMUIPASSCODEVIEWMODEL_H

@class NSArray, NSString;

#import <Foundation/Foundation.h>


@interface RMUIPasscodeViewModel : NSObject

@property (retain) NSArray *detailViewModels; // ivar: _detailViewModels
@property short symbol; // ivar: _symbol
@property (retain) NSString *title; // ivar: _title


-(id)init;
-(void)clearModel;


@end


#endif