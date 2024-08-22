// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.5.0 | SDK: 16.5.0


#ifndef _TTC21SIRIINFORMATIONSEARCH16VOCABULARYRESULT_H
#define _TTC21SIRIINFORMATIONSEARCH16VOCABULARYRESULT_H

@class NSString;
@protocol NSSecureCoding;

#import <Foundation/Foundation.h>


@interface _TtC21SiriInformationSearch16VocabularyResult : NSObject <NSSecureCoding>

 {
    ? appId;
    ? itemId;
    ? itemType;
    ? fieldTypes;
    ? score;
    ? spanBegin;
    ? spanEnd;
    ? semanticValue;
    ? fields;
}


@property (nonatomic, readonly) NSString *description;


+(BOOL)supportsSecureCoding;
-(id)init;
-(id)initWithCoder:(id)arg0 ;
-(void)encodeWithCoder:(id)arg0 ;


@end


#endif