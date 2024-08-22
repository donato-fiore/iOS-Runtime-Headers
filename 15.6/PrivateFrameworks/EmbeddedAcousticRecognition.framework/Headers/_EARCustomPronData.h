// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _EARCUSTOMPRONDATA_H
#define _EARCUSTOMPRONDATA_H


#import <Foundation/Foundation.h>


@interface _EARCustomPronData : NSObject

@property (nonatomic) shared_ptr<quasar::CustomPronData> data; // ivar: _data


-(?)initWithCustomPronData;
-(BOOL)isValid;
-(id)getProns;
-(id)getRejectedProns;
-(id)validationError;


@end


#endif