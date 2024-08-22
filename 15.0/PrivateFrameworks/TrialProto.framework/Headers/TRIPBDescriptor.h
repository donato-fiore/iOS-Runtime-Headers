// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBDESCRIPTOR_H
#define TRIPBDESCRIPTOR_H

@class NSArray, NSString;
@protocol NSCopying;

#import <Foundation/Foundation.h>

#import "TRIPBDescriptor.h"
#import "TRIPBFileDescriptor.h"

@interface TRIPBDescriptor : NSObject <NSCopying>

 {
    unsigned int storageSize_;
}


@property (readonly) TRIPBDescriptor *containingType;
@property (readonly, nonatomic) *TRIPBExtensionRange extensionRanges; // ivar: extensionRanges_
@property (readonly, nonatomic) unsigned int extensionRangesCount; // ivar: extensionRangesCount_
@property (readonly, nonatomic) NSArray *fields; // ivar: fields_
@property (readonly, nonatomic) TRIPBFileDescriptor *file; // ivar: file_
@property (readonly) NSString *fullName;
@property (readonly, nonatomic) Class messageClass; // ivar: messageClass_
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) NSArray *oneofs; // ivar: oneofs_
@property (readonly, nonatomic, getter=isWireFormat) BOOL wireFormat; // ivar: wireFormat_


+(id)allocDescriptorForClass:(Class)arg0 rootClass:(Class)arg1 file:(id)arg2 fields:(*void)arg3 fieldCount:(unsigned int)arg4 storageSize:(unsigned int)arg5 flags:(unsigned int)arg6 ;
-(id)copyWithZone:(struct _NSZone *)arg0 ;
-(id)fieldWithName:(id)arg0 ;
-(id)fieldWithNumber:(unsigned int)arg0 ;
-(id)initWithClass:(Class)arg0 file:(id)arg1 fields:(id)arg2 storageSize:(unsigned int)arg3 wireFormat:(BOOL)arg4 ;
-(id)oneofWithName:(id)arg0 ;
-(void)dealloc;
-(void)setupContainingMessageClassName:(char *)arg0 ;
-(void)setupExtensionRanges:(struct TRIPBExtensionRange *)arg0 count:(int)arg1 ;
-(void)setupExtraTextInfo:(char *)arg0 ;
-(void)setupMessageClassNameSuffix:(id)arg0 ;
-(void)setupOneofs:(*char *)arg0 count:(unsigned int)arg1 firstHasIndex:(int)arg2 ;


@end


#endif