// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef CONTENTIMAGE_H
#define CONTENTIMAGE_H

@class INObject, NSString, NSNumber;



@interface ContentImage : INObject

@property (nonatomic, copy) NSString *format;
@property (nonatomic, retain) NSNumber *height;
@property (nonatomic, copy) NSString *templateUrl;
@property (nonatomic) NSInteger type;
@property (nonatomic, retain) NSNumber *width;


+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg0 ;
-(id)initWithIdentifier:(id)arg0 displayString:(id)arg1 pronunciationHint:(id)arg2 ;


@end


#endif