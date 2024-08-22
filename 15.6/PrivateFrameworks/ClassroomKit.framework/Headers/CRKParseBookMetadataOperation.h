// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 15.6.0 | SDK: 15.6.0


#ifndef CRKPARSEBOOKMETADATAOPERATION_H
#define CRKPARSEBOOKMETADATAOPERATION_H

@class CATOperation;


#import "CRKBook.h"

@interface CRKParseBookMetadataOperation : CATOperation {
    BOOL mParseImage;
}


@property (readonly, nonatomic) CRKBook *book; // ivar: _book


-(BOOL)isAsynchronous;
-(id)initWithBook:(id)arg0 parseImage:(BOOL)arg1 ;
-(void)main;
-(void)parseBookContentsOperationDidFinish:(id)arg0 ;
-(void)parseContentsFilePathOperationDidFinish:(id)arg0 ;
-(void)updateAuthor:(id)arg0 ;
-(void)updateTitle:(id)arg0 ;


@end


#endif