// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef LAACL_H
#define LAACL_H

@class NSDictionary, NSData;

#import <Foundation/Foundation.h>


@interface LAACL : NSObject {
    *__SecAccessControl _acl;
    NSDictionary *_constraints;
    NSData *_data;
}


@property (readonly, nonatomic) NSDictionary *constraints;
@property (readonly, nonatomic) NSData *data;


-(BOOL)isEqual:(id)arg0 ;
-(id)initWithData:(id)arg0 ;
-(void)dealloc;
-(void)evaluateInContext:(id)arg0 options:(id)arg1 reply:(id)arg2 ;


@end


#endif