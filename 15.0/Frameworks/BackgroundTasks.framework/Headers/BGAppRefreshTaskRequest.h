// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef BGAPPREFRESHTASKREQUEST_H
#define BGAPPREFRESHTASKREQUEST_H



#import "BGTaskRequest.h"

@interface BGAppRefreshTaskRequest : BGTaskRequest



+(Class)_correspondingTaskClass;
+(id)_requestFromActivity:(id)arg0 ;
-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)_activity;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(id)initWithIdentifier:(id)arg0 ;


@end


#endif