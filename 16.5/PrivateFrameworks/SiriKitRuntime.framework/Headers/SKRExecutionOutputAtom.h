// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef SKREXECUTIONOUTPUTATOM_H
#define SKREXECUTIONOUTPUTATOM_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface SKRExecutionOutputAtom : NSObject <NSSecureCoding>

 {
    ? type;
    ? command;
    ? contextUpdate;
}




+(BOOL)supportsSecureCoding;
+(void)setSupportsSecureCoding:(BOOL)arg0 ;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif