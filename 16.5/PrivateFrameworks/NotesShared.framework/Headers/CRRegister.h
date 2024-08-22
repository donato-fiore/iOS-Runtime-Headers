// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CRREGISTER_H
#define CRREGISTER_H

@class NSString;
@protocol CRDataType, CRCoding;

#import <Foundation/Foundation.h>

#import "ICCRDocument.h"

@interface CRRegister : NSObject <CRDataType, CRCoding>



@property (retain, nonatomic) id *contents;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) ICCRDocument *document; // ivar: _document
@property (readonly) NSUInteger hash;
@property (readonly) Class superclass;


+(id)registerWithType:(NSUInteger)arg0 contents:(id)arg1 ;
+(id)registerWithType:(NSUInteger)arg0 contents:(id)arg1 document:(id)arg2 ;
-(BOOL)isEqualContents:(id)arg0 ;
-(id)deltaSince:(id)arg0 in:(id)arg1 ;
-(id)initWithCRCoder:(id)arg0 ;
-(id)initWithDocument:(id)arg0 ;
-(id)tombstone;
-(void)encodeWithCRCoder:(id)arg0 ;
-(void)mergeWith:(id)arg0 ;
-(void)realizeLocalChangesIn:(id)arg0 ;
-(void)walkGraph:(id)arg0 ;


@end


#endif