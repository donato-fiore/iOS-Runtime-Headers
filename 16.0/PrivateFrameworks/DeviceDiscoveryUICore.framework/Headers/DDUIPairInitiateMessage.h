// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef DDUIPAIRINITIATEMESSAGE_H
#define DDUIPAIRINITIATEMESSAGE_H


#import <Foundation/Foundation.h>

#import "DDUIApplicationInfo.h"

@interface DDUIPairInitiateMessage : NSObject

@property (readonly, nonatomic) DDUIApplicationInfo *applicationInfo; // ivar: _applicationInfo


-(id)description;
-(id)dictionaryRepresentation;
-(id)initWithApplicationInfo:(id)arg0 ;
-(id)initWithDictionaryRepresentation:(id)arg0 ;


@end


#endif