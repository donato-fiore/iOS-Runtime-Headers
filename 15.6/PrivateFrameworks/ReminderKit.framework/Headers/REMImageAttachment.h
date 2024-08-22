// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef REMIMAGEATTACHMENT_H
#define REMIMAGEATTACHMENT_H



#import "REMFileAttachment.h"

@interface REMImageAttachment : REMFileAttachment

@property (nonatomic) NSUInteger height; // ivar: _height
@property (nonatomic) NSUInteger width; // ivar: _width


+(BOOL)supportsSecureCoding;
+(id)cdEntityName;
-(BOOL)isEqual:(id)arg0 ;
-(id)_deepCopy;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithObjectID:(id)arg0 accountID:(id)arg1 reminderID:(id)arg2 UTI:(id)arg3 fileSize:(NSUInteger)arg4 fileURL:(id)arg5 data:(id)arg6 width:(NSUInteger)arg7 height:(NSUInteger)arg8 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif