// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef RMUIINTERACTIVEPROFILEERRORVIEWMODEL_H
#define RMUIINTERACTIVEPROFILEERRORVIEWMODEL_H

@class NSError, NSString;

#import <Foundation/Foundation.h>


@interface RMUIInteractiveProfileErrorViewModel : NSObject

@property (retain) NSError *error; // ivar: _error
@property (retain) NSString *message; // ivar: _message
@property (retain) NSString *okText; // ivar: _okText
@property (retain) NSString *title; // ivar: _title


-(id)initWithError:(id)arg0 isActivating:(BOOL)arg1 ;


@end


#endif