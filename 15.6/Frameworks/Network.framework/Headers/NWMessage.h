// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef NWMESSAGE_H
#define NWMESSAGE_H

@protocol OS_dispatch_data, OS_nw_content_context;

#import <Foundation/Foundation.h>


@interface NWMessage : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_data> *internalContent; // ivar: _internalContent
@property (retain, nonatomic) NSObject<OS_nw_content_context> *internalContext; // ivar: _internalContext


-(id)initWithContent:(id)arg0 context:(id)arg1 ;


@end


#endif