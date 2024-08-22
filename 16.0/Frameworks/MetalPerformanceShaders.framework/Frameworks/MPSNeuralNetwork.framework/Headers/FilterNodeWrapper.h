// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FILTERNODEWRAPPER_H
#define FILTERNODEWRAPPER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface FilterNodeWrapper : NSObject <NSSecureCoding>

 {
    *void node;
}




+(BOOL)supportsSecureCoding;
+(id)wrapperWithFilterNode:(*void)arg0 ;
-(*void)node;
-(id)debugDescription;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithFilterNode:(*void)arg0 ;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif