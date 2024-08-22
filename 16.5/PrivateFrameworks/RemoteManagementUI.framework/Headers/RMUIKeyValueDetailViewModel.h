// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMUIKEYVALUEDETAILVIEWMODEL_H
#define RMUIKEYVALUEDETAILVIEWMODEL_H

@class NSString;

#import <Foundation/Foundation.h>


@interface RMUIKeyValueDetailViewModel : NSObject

@property (retain) NSString *title; // ivar: _title
@property (retain) NSString *value; // ivar: _value
@property (readonly) NSString *viewID; // ivar: _viewID


-(id)init;
-(id)initWithTitle:(id)arg0 value:(id)arg1 ;
-(void)clearModel;


@end


#endif