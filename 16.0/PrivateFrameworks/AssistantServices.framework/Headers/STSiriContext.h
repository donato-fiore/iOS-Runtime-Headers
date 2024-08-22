// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef STSIRICONTEXT_H
#define STSIRICONTEXT_H

@class NSArray;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface STSiriContext : NSObject <NSSecureCoding>

 {
    NSArray *_modelObjects;
}




+(BOOL)supportsSecureCoding;
-(id)_aceValue;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithModelObjects:(id)arg0 ;
-(id)modelObjects;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif