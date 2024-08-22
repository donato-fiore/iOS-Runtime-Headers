// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CCVEGASIGNALUPDATEASYNCOPERATION_H
#define CCVEGASIGNALUPDATEASYNCOPERATION_H

@class NSString;
@protocol CCAsyncOperation;

#import <Foundation/Foundation.h>

#import "CCVegaRenderer.h"

@interface CCVegaSignalUpdateAsyncOperation : NSObject <CCAsyncOperation>



@property (retain, nonatomic) NSString *name; // ivar: _name
@property (weak, nonatomic) CCVegaRenderer *renderer; // ivar: _renderer
@property (retain, nonatomic) id *value; // ivar: _value


-(void)performOperationWithCallback:(id)arg0 ;


@end


#endif