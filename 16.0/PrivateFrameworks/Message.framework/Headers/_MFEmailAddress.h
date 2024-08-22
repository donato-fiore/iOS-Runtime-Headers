// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef _MFEMAILADDRESS_H
#define _MFEMAILADDRESS_H

@class NSString;

#import <Foundation/Foundation.h>


@interface _MFEmailAddress : NSObject {
    NSString *_fullAddress;
}


@property (readonly, copy, nonatomic) NSString *address; // ivar: _address
@property (readonly, copy, nonatomic) NSString *displayName; // ivar: _displayName
@property (readonly, copy, nonatomic) NSString *fullAddress;


-(id)initWithAddress:(id)arg0 ;
-(id)initWithAddress:(id)arg0 displayName:(id)arg1 ;


@end


#endif