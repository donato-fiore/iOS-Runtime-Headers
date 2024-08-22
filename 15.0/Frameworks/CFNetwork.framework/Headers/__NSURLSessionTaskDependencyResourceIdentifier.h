// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef __NSURLSESSIONTASKDEPENDENCYRESOURCEIDENTIFIER_H
#define __NSURLSESSIONTASKDEPENDENCYRESOURCEIDENTIFIER_H

@class NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>


@interface __NSURLSessionTaskDependencyResourceIdentifier : NSObject <NSCopying>

 {
    NSString *_URLPath;
    NSString *_mimeType;
}




-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)description;
-(void)dealloc;


@end


#endif