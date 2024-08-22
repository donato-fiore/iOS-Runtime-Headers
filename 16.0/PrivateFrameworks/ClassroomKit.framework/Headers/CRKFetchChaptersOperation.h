// Headers generated with ktool v2.0.0
// https://github.com/cxnder/ktool | pip3 install k2l
// Platform: IOS | Minimum OS: 16.0.0 | SDK: 16.0.0


#ifndef CRKFETCHCHAPTERSOPERATION_H
#define CRKFETCHCHAPTERSOPERATION_H

@class CATOperation, NSString;



@interface CRKFetchChaptersOperation : CATOperation {
    NSString *mPath;
    NSString *mIdentifierType;
    NSString *mIdentifier;
}




-(BOOL)isAsynchronous;
-(id)initWithBook:(id)arg0 ;
-(id)initWithBookPath:(id)arg0 identifierType:(id)arg1 identifier:(id)arg2 ;
-(id)initWithRequest:(id)arg0 error:(*id)arg1 ;
-(void)main;
-(void)parseOFPPackageContentsOperationDidFinish:(id)arg0 ;
-(void)parseOPFFilePathOperationDidFinish:(id)arg0 ;
-(void)parseTableOfContentsOperationDidFinish:(id)arg0 ;


@end


#endif