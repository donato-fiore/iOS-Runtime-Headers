// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _ACCOMPONENTWRAPPER_H
#define _ACCOMPONENTWRAPPER_H

@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _ACComponentWrapper : NSObject <NSSecureCoding>

 {
    shared_ptr<APComponent> mComponent;
}




+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithComponent:(*void)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif