// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef SXTEXTSTYLEATTRIBUTESMAP_H
#define SXTEXTSTYLEATTRIBUTESMAP_H

@class NSMutableArray, NSString;

#import <Foundation/Foundation.h>


@interface SXTextStyleAttributesMap : NSObject

@property (readonly, nonatomic) NSMutableArray *attributes; // ivar: _attributes
@property (readonly, nonatomic) NSString *string; // ivar: _string


-(id)attributedString;
-(id)attributesMapWithAttributesForRange:(struct _NSRange )arg0 ;
-(id)description;
-(id)initWithString:(id)arg0 ;
-(void)addAttributes:(id)arg0 ;


@end


#endif