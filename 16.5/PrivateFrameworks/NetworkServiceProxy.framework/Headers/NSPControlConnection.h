// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef NSPCONTROLCONNECTION_H
#define NSPCONTROLCONNECTION_H


#import <Foundation/Foundation.h>


@interface NSPControlConnection : NSObject

@property (readonly) NSUInteger flowIdentifier; // ivar: _flowIdentifier


-(id)initFromConnection:(id)arg0 ;
-(id)initFromMetadata:(id)arg0 ;
-(id)initFromNWConnection:(id)arg0 ;
-(id)initFromStream:(id)arg0 ;
-(id)initFromTask:(id)arg0 ;
-(void)fetchConnectionInfoWithCompletionHandler:(id)arg0 ;


@end


#endif