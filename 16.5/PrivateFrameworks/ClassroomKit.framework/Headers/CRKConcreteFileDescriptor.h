// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRKCONCRETEFILEDESCRIPTOR_H
#define CRKCONCRETEFILEDESCRIPTOR_H

@class NSNumber, NSString;
@protocol CRKFileDescriptor;

#import <Foundation/Foundation.h>


@interface CRKConcreteFileDescriptor : NSObject <CRKFileDescriptor>



@property (retain, nonatomic) NSNumber *backingValue; // ivar: _backingValue
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) NSUInteger hash;
@property (readonly, nonatomic) int rawValue;
@property (readonly) Class superclass;


-(BOOL)changeFlags:(unsigned int)arg0 error:(*id)arg1 ;
-(BOOL)fetchFlags:(*unsigned int)arg0 error:(*id)arg1 ;
-(id)initWithRawValue:(int)arg0 ;
-(void)close;
-(void)dealloc;


@end


#endif