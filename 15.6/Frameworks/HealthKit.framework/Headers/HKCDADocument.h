// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef HKCDADOCUMENT_H
#define HKCDADOCUMENT_H

@class NSData, NSString;

#import <Foundation/Foundation.h>


@interface HKCDADocument : NSObject {
    NSData *_internalDocumentData;
    NSData *_compressedDocumentData;
}


@property (readonly, copy) NSString *authorName; // ivar: _authorName
@property (readonly, copy) NSString *custodianName; // ivar: _custodianName
@property (readonly, copy) NSData *documentData;
@property (readonly, copy) NSString *patientName; // ivar: _patientName
@property (readonly, copy) NSString *title; // ivar: _title


-(BOOL)_compressDocumentDataForTransfer:(*id)arg0 ;
-(BOOL)_decompressDocumentDataForDelivery:(*id)arg0 ;
-(id)_compressedDocumentData;
-(id)_descriptionFieldTitle:(id)arg0 content:(id)arg1 maxSize:(NSUInteger)arg2 ;
-(id)_validateConfiguration;
-(id)description;
-(id)initWithCoder:(id)arg0 omittedContentFlags:(NSInteger)arg1 ;
-(id)initWithDocumentData:(id)arg0 compressedDocumentData:(id)arg1 title:(id)arg2 patientName:(id)arg3 authorName:(id)arg4 custodianName:(id)arg5 ;
-(void)encodeWithCoder:(id)arg0 omittedContentFlags:(NSInteger)arg1 ;


@end


#endif