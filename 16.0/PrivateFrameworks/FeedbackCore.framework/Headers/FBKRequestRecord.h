// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef FBKREQUESTRECORD_H
#define FBKREQUESTRECORD_H

@class DEDRequestRecord, NSAttributedString, UIColor;



@interface FBKRequestRecord : DEDRequestRecord

@property (readonly) NSAttributedString *attrRequestBody;
@property (readonly) NSAttributedString *attrRequestHeader;
@property (readonly) NSAttributedString *attrResponseBody;
@property (readonly) NSAttributedString *attrResponseHeader;
@property (readonly) UIColor *displayColor;


-(id)attributedStringAttributes;
-(id)description;


@end


#endif