// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef MTCONVENIENCEENVIRONMENTDELEGATE_H
#define MTCONVENIENCEENVIRONMENTDELEGATE_H



#import "MTEnvironmentStoreDelegate.h"

@interface MTConvenienceEnvironmentDelegate : MTEnvironmentStoreDelegate

@property (copy, nonatomic) id *_hostAppBlock; // ivar: __hostAppBlock
@property (copy, nonatomic) id *_pageURLBlock; // ivar: __pageURLBlock
@property (copy, nonatomic) id *_resourceRevNumBlock; // ivar: __resourceRevNumBlock


-(id)hostApp;
-(id)init;
// -(id)initWithPageURLBlock:(id)arg0 resourceRevNumBlock:(unk)arg1 hostAppBlock:(id)arg2  ;
-(id)pageUrl;
-(id)resourceRevNum;


@end


#endif