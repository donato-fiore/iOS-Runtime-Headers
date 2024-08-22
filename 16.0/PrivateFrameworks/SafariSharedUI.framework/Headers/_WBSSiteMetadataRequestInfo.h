// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _WBSSITEMETADATAREQUESTINFO_H
#define _WBSSITEMETADATAREQUESTINFO_H

@class NSOperation, NSMutableSet;
@protocol WBSSiteMetadataProvider;

#import <Foundation/Foundation.h>


@interface _WBSSiteMetadataRequestInfo : NSObject

@property (weak, nonatomic) NSOperation *operation; // ivar: _operation
@property (readonly, nonatomic) NSObject<WBSSiteMetadataProvider> *provider; // ivar: _provider
@property (readonly, nonatomic) NSMutableSet *tokens; // ivar: _tokens


-(id)initWithProvider:(id)arg0 ;
-(void)dealloc;


@end


#endif