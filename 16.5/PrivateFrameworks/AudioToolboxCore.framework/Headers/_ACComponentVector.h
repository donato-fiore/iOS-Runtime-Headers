// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _ACCOMPONENTVECTOR_H
#define _ACCOMPONENTVECTOR_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ACComponentVector : NSObject <NSSecureCoding>

 {
    AudioComponentVector mVector;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithVector:(*void)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif