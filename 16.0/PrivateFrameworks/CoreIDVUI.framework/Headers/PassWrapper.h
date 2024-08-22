// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef PASSWRAPPER_H
#define PASSWRAPPER_H

@class PKPass;

#import <Foundation/Foundation.h>


@interface PassWrapper : NSObject

@property (retain, nonatomic) PKPass *pass; // ivar: _pass


-(id)getPassImageWithSize:(struct CGSize )arg0 ;
-(id)getPassName;
-(id)initWithUniquePassID:(id)arg0 ;


@end


#endif