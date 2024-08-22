// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef _NSXPCSTOREOBJECTIDARRAYCONSTANTVALUEEXPRESSION_H
#define _NSXPCSTOREOBJECTIDARRAYCONSTANTVALUEEXPRESSION_H

@protocol NSSecureCoding, NSCoding;

#import <Foundation/Foundation.h>


@interface _NSXPCStoreObjectIDArrayConstantValueExpression : NSObject <NSSecureCoding, NSCoding>

 {
    id *_constantValue;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif