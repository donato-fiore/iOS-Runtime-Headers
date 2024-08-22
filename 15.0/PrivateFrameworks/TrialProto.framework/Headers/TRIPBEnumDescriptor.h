// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.0.0 | SDK: 15.0.0


#ifndef TRIPBENUMDESCRIPTOR_H
#define TRIPBENUMDESCRIPTOR_H

@class NSString;

#import <Foundation/Foundation.h>


@interface TRIPBEnumDescriptor : NSObject {
    char * valueNames_;
    *int values_;
    char * extraTextFormatInfo_;
    *unsigned int nameOffsets_;
    unsigned int valueCount_;
}


@property (readonly, nonatomic) *unk enumVerifier; // ivar: enumVerifier_
@property (readonly, copy, nonatomic) NSString *name; // ivar: name_


+(id)allocDescriptorForName:(id)arg0 valueNames:(char *)arg1 values:(*int)arg2 count:(unsigned int)arg3 enumVerifier:(*unk)arg4 ;
+(id)allocDescriptorForName:(id)arg0 valueNames:(char *)arg1 values:(*int)arg2 count:(unsigned int)arg3 enumVerifier:(*unk)arg4 extraTextFormatInfo:(char *)arg5 ;
-(BOOL)getValue:(*int)arg0 forEnumName:(id)arg1 ;
-(BOOL)getValue:(*int)arg0 forEnumTextFormatName:(id)arg1 ;
-(id)enumNameForValue:(int)arg0 ;
-(id)initWithName:(id)arg0 valueNames:(char *)arg1 values:(*int)arg2 count:(unsigned int)arg3 enumVerifier:(*unk)arg4 ;
-(id)textFormatNameForValue:(int)arg0 ;
-(void)calcValueNameOffsets;
-(void)dealloc;


@end


#endif