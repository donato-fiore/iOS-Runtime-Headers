// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef VSUNBINDER_H
#define VSUNBINDER_H

@class NSMapTable;

#import <Foundation/Foundation.h>


@interface VSUnbinder : NSObject

@property (retain, nonatomic) NSMapTable *bindingsByBinder; // ivar: _bindingsByBinder
@property (nonatomic, getter=isInvalid) BOOL invalid; // ivar: _invalid


-(id)init;
-(void)binder:(id)arg0 didEstablishBinding:(id)arg1 ;
-(void)binder:(id)arg0 didTearDownBinding:(id)arg1 ;
-(void)dealloc;


@end


#endif