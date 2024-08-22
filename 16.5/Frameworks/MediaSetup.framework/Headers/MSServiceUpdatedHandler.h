// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef MSSERVICEUPDATEDHANDLER_H
#define MSSERVICEUPDATEDHANDLER_H

@protocol MediaServiceUpdatedClientDelegate;

#import <Foundation/Foundation.h>


@interface MSServiceUpdatedHandler : NSObject

@property (weak, nonatomic) NSObject<MediaServiceUpdatedClientDelegate> *delegate; // ivar: _delegate


+(id)shared;
-(void)defaultMediaServiceUpdated:(id)arg0 homeUserID:(id)arg1 ;
-(void)mediaServiceChanged:(id)arg0 homeUserID:(id)arg1 ;
-(void)mediaServiceRemoved:(id)arg0 homeUserID:(id)arg1 ;


@end


#endif