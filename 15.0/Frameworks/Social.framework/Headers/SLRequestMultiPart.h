// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef SLREQUESTMULTIPART_H
#define SLREQUESTMULTIPART_H

@class NSString, NSData;

#import <Foundation/Foundation.h>


@interface SLRequestMultiPart : NSObject {
    NSString *_uniqueIdentifier;
}


@property (copy, nonatomic) NSString *filename; // ivar: _filename
@property (copy, nonatomic) NSString *multiPartBoundary; // ivar: _multiPartBoundary
@property (copy, nonatomic) NSString *name; // ivar: _name
@property (retain, nonatomic) NSData *payload; // ivar: _payload
@property (copy, nonatomic) NSString *type; // ivar: _type
@property (readonly, nonatomic) NSString *uniqueIdentifier;


+(id)multiPartWithName:(id)arg0 payload:(id)arg1 type:(id)arg2 multiPartBoundary:(id)arg3 ;
-(NSUInteger)length;
-(id)multiPartHeader;
-(id)partData;


@end


#endif