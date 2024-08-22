// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef TRIPBFILEDESCRIPTOR_H
#define TRIPBFILEDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TRIPBFileDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *objcPrefix; // ivar: objcPrefix_
@property (readonly, copy, nonatomic) NSString *package; // ivar: package_
@property (readonly, nonatomic) unsigned char syntax; // ivar: syntax_


-(id)initWithPackage:(id)arg0 objcPrefix:(id)arg1 syntax:(unsigned char)arg2 ;
-(id)initWithPackage:(id)arg0 syntax:(unsigned char)arg1 ;
-(void)dealloc;


@end


#endif