// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CCVEGAEVENTASYNCOPERATION_H
#define CCVEGAEVENTASYNCOPERATION_H

@class NSString;
@protocol CCAsyncOperation;

#import <Foundation/Foundation.h>

#import "CCVegaJSMouseEvent.h"
#import "CCVegaRenderer.h"

@interface CCVegaEventAsyncOperation : NSObject <CCAsyncOperation>



@property (retain, nonatomic) CCVegaJSMouseEvent *event; // ivar: _event
@property (weak, nonatomic) CCVegaRenderer *renderer; // ivar: _renderer
@property (retain, nonatomic) NSString *type; // ivar: _type


-(void)performOperationWithCallback:(id)arg0 ;


@end


#endif