// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef PTPARTICIPANT_H
#define PTPARTICIPANT_H

@class UIImage, NSString, CXParticipant;

#import <Foundation/Foundation.h>


@interface PTParticipant : NSObject

@property (readonly, copy, nonatomic) UIImage *image; // ivar: _image
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) CXParticipant *underlyingParticipant; // ivar: _underlyingParticipant


-(BOOL)isEqual:(id)arg0 ;
-(NSUInteger)hash;
-(id)initWithName:(id)arg0 image:(id)arg1 ;


@end


#endif