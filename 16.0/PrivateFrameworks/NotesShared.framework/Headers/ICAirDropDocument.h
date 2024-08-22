// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef ICAIRDROPDOCUMENT_H
#define ICAIRDROPDOCUMENT_H

@protocol ICAirDropDocument;

#import <Foundation/Foundation.h>


@interface ICAirDropDocument : NSObject <ICAirDropDocument>

 {
    Document _document;
}


@property (readonly, nonatomic) id *activityItem;
@property (readonly, nonatomic) BOOL hasDocumentForLegacyNote;
@property (readonly, nonatomic) BOOL hasDocumentForNote;


+(BOOL)canAirDropImportIntoAccount:(id)arg0 context:(id)arg1 ;
+(id)documentAtURL:(id)arg0 ;
+(id)legacyNoteAirDropDocumentWithData:(id)arg0 ;
-(*void)document;
-(id)dataFromLegacyNoteDocument;
-(id)initWithData:(id)arg0 ;


@end


#endif